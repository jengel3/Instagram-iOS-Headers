
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
	SCD_Struct_IG47 _startTime;
	SCD_Struct_IG47 _seekTime;

}

@property (nonatomic,retain) AVAsset * asset;                                              //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 endTime; 
@property (nonatomic,readonly) SCD_Struct_IG47 currentTime; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (assign,nonatomic) char isPlaying;                                               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,getter=isLooping,nonatomic) char looping;                                //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic,__weak) id<IGAssetPlayerViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                            //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) id currentTimeObserver;                                       //@synthesize currentTimeObserver=_currentTimeObserver - In the implementation block
@property (assign,getter=isSeeking,nonatomic) char seeking;                                //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 seekTime;                                     //@synthesize seekTime=_seekTime - In the implementation block
-(void)playFromStart;
-(void)playFromTime:(SCD_Struct_IG47)arg1 ;
-(id)currentTimeObserver;
-(void)onPlayerItemPlayedToEnd;
-(void)registerCurrentTimeObserver;
-(void)setIsPlaying:(char)arg1 ;
-(void)setCurrentTimeObserver:(id)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setLooping:(char)arg1 ;
-(char)isSeeking;
-(void)seekToTime:(SCD_Struct_IG47)arg1 ;
-(void)setSeeking:(char)arg1 ;
-(SCD_Struct_IG47)currentTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(SCD_Struct_IG47)seekTime;
-(char)isReadyForDisplay;
-(void)setSeekTime:(SCD_Struct_IG47)arg1 ;
-(char)isPlaying;
-(AVPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAssetPlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAssetPlayerViewDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_IG47)arg1 ;
-(void)stop;
-(AVAsset *)asset;
-(SCD_Struct_IG47)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(SCD_Struct_IG47)endTime;
-(void)setEndTime:(SCD_Struct_IG47)arg1 ;
-(char)isLooping;
-(AVPlayerLayer *)playerLayer;
@end

