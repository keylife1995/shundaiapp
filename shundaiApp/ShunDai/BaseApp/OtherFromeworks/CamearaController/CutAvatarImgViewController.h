//
//  CutAvatarImgViewController.h
//  CutPicTest
//
//  Created by liulu on 13-4-8.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "PengPengViewController.h"

@protocol CutAvatarImgViewControllerDelegate;

@interface CutAvatarImgViewController : UIViewController<UIScrollViewDelegate>
{
    UIImageView* _maskImgView;
    UIScrollView* _imageContainer;
    UIImageView* _imageview;
    UIImageView* _imageviewCut;
    UIView* _bottonBar;
    BOOL _statuBarDefaultState;
    
    UIImage* subImage;
    
    id<CutAvatarImgViewControllerDelegate> delegate;
    BOOL isImgAvailable;
}
@property (nonatomic,retain) UIImage* sourceImage;
@property (nonatomic,assign) id<CutAvatarImgViewControllerDelegate> delegate;
@property (nonatomic,assign) CGRect backImageViewRect;
@property (nonatomic,assign) BOOL isUploadAlbum;

@end

@protocol CutAvatarImgViewControllerDelegate <NSObject>

@optional
-(void)cutImgFinish:(UIImage*)image;

@end
