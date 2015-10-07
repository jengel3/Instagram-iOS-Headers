/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGExploreTTILogger : NSObject {

	char _hasLoggedOnce;
	NSString* _module;
	double _startTimestamp;

}

@property (assign,nonatomic) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * module;                //@synthesize module=_module - In the implementation block
@property (assign,nonatomic) char hasLoggedOnce;                 //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
-(id)initWithModule:(id)arg1 ;
-(void)stopWithSuccess:(char)arg1 ;
-(char)hasLoggedOnce;
-(void)setHasLoggedOnce:(char)arg1 ;
-(NSString *)module;
-(void)start;
-(double)startTimestamp;
-(void)setStartTimestamp:(double)arg1 ;
@end

