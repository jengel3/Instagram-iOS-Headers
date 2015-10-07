/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:15 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class UIBezierPath, IGPathStyleSet;

@interface IGAssetComponent : NSObject {

	UIBezierPath* _path;
	IGPathStyleSet* _style;
	CGPoint _position;

}

@property (nonatomic,retain) UIBezierPath * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) IGPathStyleSet * style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGPoint position;                    //@synthesize position=_position - In the implementation block
-(UIBezierPath *)path;
-(IGPathStyleSet *)style;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setStyle:(IGPathStyleSet *)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

