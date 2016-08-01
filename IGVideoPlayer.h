
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol IGVideoPlayerDelegate, OS_dispatch_queue;
@class AVPlayerItemVideoOutput, AVAsset, AVPlayer, AVPlayerItem, CADisplayLink, NSObject, NSString;

@interface IGVideoPlayer : NSObject <AVPlayerItemOutputPullDelegate> {

	id _displayLinkTarget;
	char _isLooping;
	char _hasReceivedValidFramesForCurrentAsset;
	char _isSeeking;
	AVPlayerItemVideoOutput* _videoOutput;
	AVAsset* _asset;
	id<IGVideoPlayerDelegate> _delegate;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	CADisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _videoOutputQueue;
	SCD_Struct_IG53 _startTime;
	SCD_Struct_IG53 _seekTime;

}

@property (nonatomic,retain) AVPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItemVideoOutput * videoOutput;                      //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoOutputQueue;              //@synthesize videoOutputQueue=_videoOutputQueue - In the implementation block
@property (assign,nonatomic) char isSeeking;                                             //@synthesize isSeeking=_isSeeking - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG53 seekTime;                                   //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG53 startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG53 endTime; 
@property (nonatomic,readonly) SCD_Struct_IG53 currentTime; 
@property (nonatomic,readonly) SCD_Struct_IG53 duration; 
@property (nonatomic,readonly) float progress; 
@property (assign,nonatomic) char isMuted; 
@property (assign,nonatomic) char isLooping;                                             //@synthesize isLooping=_isLooping - In the implementation block
@property (assign,nonatomic) char hasReceivedValidFramesForCurrentAsset;                 //@synthesize hasReceivedValidFramesForCurrentAsset=_hasReceivedValidFramesForCurrentAsset - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlayerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playFromStart;
-(void)playFromTime:(SCD_Struct_IG53)arg1 ;
-(char)hasReceivedValidFramesForCurrentAsset;
-(void)stopWithoutAnimation;
-(void)itemDidFinishPlaying;
-(NSObject*<OS_dispatch_queue>)videoOutputQueue;
-(void)displayLinkCallback:(id)arg1 ;
-(void)setIsSeeking:(char)arg1 ;
-(void)loadBufferAtItemTime:(SCD_Struct_IG53)arg1 ;
-(void)stopHelperAnimated:(char)arg1 ;
-(void)setHasReceivedValidFramesForCurrentAsset:(char)arg1 ;
-(void)setVideoOutputQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(char)isSeeking;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_IG53)arg1 ;
-(SCD_Struct_IG53)currentTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(SCD_Struct_IG53)seekTime;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setSeekTime:(SCD_Struct_IG53)arg1 ;
-(AVPlayer *)player;
-(void)setDelegate:(id<IGVideoPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGVideoPlayerDelegate>)delegate;
-(SCD_Struct_IG53)duration;
-(void)setStartTime:(SCD_Struct_IG53)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(float)progress;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_IG53)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setVideoOutput:(AVPlayerItemVideoOutput *)arg1 ;
-(AVPlayerItemVideoOutput *)videoOutput;
-(SCD_Struct_IG53)endTime;
-(void)setEndTime:(SCD_Struct_IG53)arg1 ;
-(void)setIsLooping:(char)arg1 ;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
-(char)isLooping;
@end

