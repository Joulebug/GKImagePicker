//
//  GKImageCropViewController.h
//  GKImagePicker
//
//  Created by Georg Kitz on 6/1/12.
//  Copyright (c) 2012 Aurora Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GKImageCropControllerDelegate;

@interface GKImageCropViewController : UIViewController{
    UIImage *_croppedImage;
}

@property (nonatomic, strong) UIImage *sourceImage;
@property (nonatomic, assign) CGSize cropSize; //size of the crop rect, default is 320x320
@property (nonatomic, assign) BOOL resizeableCropArea;
//JJE - Added this parameter to force the picker to scale using width (ie force to square)
@property (nonatomic, assign) BOOL forceWidthScaling;

@property (nonatomic, strong) id<GKImageCropControllerDelegate> delegate;

@end


@protocol GKImageCropControllerDelegate <NSObject>
@required
- (void)imageCropController:(GKImageCropViewController *)imageCropController didFinishWithCroppedImage:(UIImage *)croppedImage;
@end