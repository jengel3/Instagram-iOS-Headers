/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGFeedItemPageCellState : NSObject {

	char _expandedCaption;
	char _videoAudioEnabled;
	int _currentItemIndex;
	int _previousItemIndex;

}

@property (assign,nonatomic) int currentItemIndex;                //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) int previousItemIndex;               //@synthesize previousItemIndex=_previousItemIndex - In the implementation block
@property (assign,nonatomic) char expandedCaption;                //@synthesize expandedCaption=_expandedCaption - In the implementation block
@property (assign,nonatomic) char videoAudioEnabled;              //@synthesize videoAudioEnabled=_videoAudioEnabled - In the implementation block
-(int)currentItemIndex;
-(void)setVideoAudioEnabled:(char)arg1 ;
-(char)videoAudioEnabled;
-(void)setCurrentItemIndex:(int)arg1 ;
-(int)previousItemIndex;
-(void)setPreviousItemIndex:(int)arg1 ;
-(char)expandedCaption;
-(void)setExpandedCaption:(char)arg1 ;
@end
