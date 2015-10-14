/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:52 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>

@protocol IGCropperViewControllerDelegate;
@class IGCropView, UIImage, NSDictionary, CLLocation;

@interface IGCropperViewController : UIViewController {

	IGCropView* _cropper;
	char _circularCropMode;
	id<IGCropperViewControllerDelegate> _delegate;
	int _minimumImageSize;
	UIImage* _fullScreenImage;
	UIImage* _fullSizeImage;
	NSDictionary* _exifData;
	CLLocation* _location;

}

@property (assign,nonatomic,__weak) id<IGCropperViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int minimumImageSize;                                             //@synthesize minimumImageSize=_minimumImageSize - In the implementation block
@property (nonatomic,retain) UIImage * fullScreenImage;                                        //@synthesize fullScreenImage=_fullScreenImage - In the implementation block
@property (nonatomic,retain) UIImage * fullSizeImage;                                          //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,retain) NSDictionary * exifData;                                          //@synthesize exifData=_exifData - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char circularCropMode;                                            //@synthesize circularCropMode=_circularCropMode - In the implementation block
-(NSDictionary *)exifData;
-(char)circularCropMode;
-(id)circularCropperView;
-(int)minimumImageSize;
-(void)setMinimumImageSize:(int)arg1 ;
-(void)setFullScreenImage:(UIImage *)arg1 ;
-(UIImage *)fullSizeImage;
-(void)setExifData:(NSDictionary *)arg1 ;
-(void)setCircularCropMode:(char)arg1 ;
-(CGRect)cropRect;
-(void)setDelegate:(id<IGCropperViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGCropperViewControllerDelegate>)delegate;
-(UIImage *)image;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)done;
-(CLLocation *)location;
-(UIImage *)fullScreenImage;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end

