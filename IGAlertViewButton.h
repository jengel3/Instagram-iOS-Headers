/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:13 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGAlertViewButton : NSObject {

	int _type;
	NSString* _text;
	SEL _callback;

}

@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) SEL callback;                 //@synthesize callback=_callback - In the implementation block
+(id)buttonTypes;
-(id)initWithButtonType:(int)arg1 text:(id)arg2 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SEL)callback;
-(void)setCallback:(SEL)arg1 ;
@end
