/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGRegistrationPhotoStepView : UIView {

	UIButton* _importFromFBButton;
	UIButton* _takePhotoButton;
	UIButton* _chooseFromLibraryButton;
	UIButton* _importFromTwitterButton;

}

@property (nonatomic,retain) UIButton * importFromFBButton;                   //@synthesize importFromFBButton=_importFromFBButton - In the implementation block
@property (nonatomic,retain) UIButton * takePhotoButton;                      //@synthesize takePhotoButton=_takePhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * chooseFromLibraryButton;              //@synthesize chooseFromLibraryButton=_chooseFromLibraryButton - In the implementation block
@property (nonatomic,retain) UIButton * importFromTwitterButton;              //@synthesize importFromTwitterButton=_importFromTwitterButton - In the implementation block
-(UIButton *)importFromFBButton;
-(UIButton *)takePhotoButton;
-(UIButton *)chooseFromLibraryButton;
-(UIButton *)importFromTwitterButton;
-(void)setSeparatorLines;
-(void)setImportFromFBButton:(UIButton *)arg1 ;
-(void)setTakePhotoButton:(UIButton *)arg1 ;
-(void)setChooseFromLibraryButton:(UIButton *)arg1 ;
-(void)setImportFromTwitterButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

