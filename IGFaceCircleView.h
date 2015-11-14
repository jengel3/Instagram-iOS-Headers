/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIImageView.h>

@class IGUsertag;

@interface IGFaceCircleView : UIImageView {

	char _isScaledDown;
	IGUsertag* _usertag;
	CGRect _faceRect;

}

@property (assign,nonatomic) CGRect faceRect;                  //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) IGUsertag * usertag;              //@synthesize usertag=_usertag - In the implementation block
@property (assign,nonatomic) char isScaledDown;                //@synthesize isScaledDown=_isScaledDown - In the implementation block
-(IGUsertag *)usertag;
-(void)setUsertag:(IGUsertag *)arg1 ;
-(void)shrink:(char)arg1 animated:(char)arg2 ;
-(char)isScaledDown;
-(void)setIsScaledDown:(char)arg1 ;
-(id)initWithFaceRect:(CGRect)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

