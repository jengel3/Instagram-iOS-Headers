/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:51 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSimpleButton.h>

@interface IGButton : IGSimpleButton {

	Class _style;
	float _minimumWidth;
	float _maximumWidth;

}

@property (assign,nonatomic) Class style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float minimumWidth;              //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) float maximumWidth;              //@synthesize maximumWidth=_maximumWidth - In the implementation block
+(id)buttonWithStyle:(Class)arg1 text:(id)arg2 ;
+(id)buttonWithStyle:(Class)arg1 text:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(id)initWithStyle:(Class)arg1 text:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(void)setSelectedTitleLabelText:(id)arg1 ;
-(float)maximumWidthForTitle;
-(id)init;
-(Class)style;
-(void)sizeToFit;
-(void)setStyle:(Class)arg1 ;
-(void)setMinimumWidth:(float)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)minimumWidth;
-(float)maximumWidth;
@end

