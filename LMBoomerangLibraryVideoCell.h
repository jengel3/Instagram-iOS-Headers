
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/LMBoomerangVideoCellProtocol.h>

@protocol OS_dispatch_queue;
@class AVPlayer, AVPlayerLayer, NSObject, UIImageView, AVAsset, NSString;

@interface LMBoomerangLibraryVideoCell : UICollectionViewCell <LMBoomerangVideoCellProtocol> {

	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;
	NSObject*<OS_dispatch_queue> _workingQueue;
	UIImageView* _imageView;
	AVAsset* _asset;
	unsigned _contentMode;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workingQueue; 
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) unsigned contentMode;                                     //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) char isPlaying; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float videoSpeedup; 
-(void)playFromBeginnning;
-(void)dispatchSyncOnPlayerQueueOrCurrent:(/*^block*/id)arg1 ;
-(void)dispatchAsyncOnPlayerQueue:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(void)seekToBeginnning;
-(CGSize)playbackViewSize;
-(CGRect)playbackFrame;
-(void)play;
-(char)isPlaying;
-(id)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setContentMode:(unsigned)arg1 ;
-(void)stop;
-(unsigned)contentMode;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
@end

