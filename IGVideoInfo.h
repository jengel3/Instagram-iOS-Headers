/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGVideoComposition;

@interface IGVideoInfo : NSObject {

	IGVideoComposition* _video;

}

@property (nonatomic,retain) IGVideoComposition * video;              //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) float totalDuration; 
-(void)dealloc;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(float)totalDuration;
-(IGVideoComposition *)video;
@end

