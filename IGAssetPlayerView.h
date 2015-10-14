/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAssetPlayerViewDelegate;
@class AVAsset, AVPlayer, AVPlayerLayer;

@interface IGAssetPlayerView : UIView {

	char _isPlaying;
	char _looping;
	char _seeking;
	AVAsset* _asset;
	id<IGAssetPlayerViewDelegate> _delegate;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	id _currentTimeObserver;
	SCD_Struct_IG57 _startTime;
	SCD_Struct_IG57 _seekTime;

}

@property (nonatomic,retain) AVAsset * asset;                                              //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG57 startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG57 endTime; 
@property (nonatomic,readonly) SCD_Struct_IG57 currentTime; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (assign,nonatomic) char isPlaying;                                               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,getter=isLooping,nonatomic) char looping;                                //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic,__weak) id<IGAssetPlayerViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                            //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) id currentTimeObserver;                                       //@synthesize currentTimeObserver=_currentTimeObserver - In the implementation block
@property (assign,getter=isSeeking,nonatomic) char seeking;                                //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG57 seekTime;                                     //@synthesize seekTime=_seekTime - In the implementation block
-(void)playFromStart;
-(void)playFromTime:(SCD_Struct_IG57)arg1 ;
-(id)currentTimeObserver;
-(AVPlayerLayer *)playerLayer;
-(void)onPlayerItemPlayedToEnd;
-(void)registerCurrentTimeObserver;
-(SCD_Struct_IG57)seekTime;
-(void)setIsPlaying:(char)arg1 ;
-(void)setCurrentTimeObserver:(id)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setLooping:(char)arg1 ;
-(char)isSeeking;
-(void)setSeeking:(char)arg1 ;
-(void)setEndTime:(SCD_Struct_IG57)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGAssetPlayerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAssetPlayerViewDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_IG57)arg1 ;
-(void)stop;
-(AVAsset *)asset;
-(SCD_Struct_IG57)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(char)isLooping;
-(SCD_Struct_IG57)endTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(SCD_Struct_IG57)currentTime;
-(AVPlayer *)player;
-(void)seekToTime:(SCD_Struct_IG57)arg1 ;
-(char)isPlaying;
-(char)isReadyForDisplay;
-(void)setSeekTime:(SCD_Struct_IG57)arg1 ;
@end

