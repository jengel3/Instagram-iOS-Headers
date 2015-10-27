/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface IGNuxTapOnCameraView : UIView {

	char _wasDismissed;

}

@property (assign,nonatomic) char wasDismissed;              //@synthesize wasDismissed=_wasDismissed - In the implementation block
+(void)decrementVisibleNUXCountFromView:(id)arg1 ;
+(void)incrementVisibleNUXCountFromView:(id)arg1 ;
+(char)isAtLeastOneNUXVisible;
-(char)wasDismissed;
-(void)setWasDismissed:(char)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(void)showInView:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end

