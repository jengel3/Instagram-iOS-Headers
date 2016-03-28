
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGAlbumPlayerViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFeedVideoCell.h>

@protocol IGFeedItemAlbumCellDelegate, IGFeedVideoCellPlayerDelegate;
@class IGAlbumPlayerView, UITapGestureRecognizer, NSString;

@interface IGFeedItemAlbumCell : UICollectionViewCell <IGAlbumPlayerViewDelegate, UIGestureRecognizerDelegate, IGFeedVideoCell> {

	float _percentVisible;
	id<IGFeedItemAlbumCellDelegate> _delegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	IGAlbumPlayerView* _albumPlayerView;
	UITapGestureRecognizer* _tap;

}

@property (nonatomic,__weak,readonly) id<IGFeedItemAlbumCellDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedVideoCellPlayerDelegate> playerDelegate;              //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (nonatomic,readonly) IGAlbumPlayerView * albumPlayerView;                                  //@synthesize albumPlayerView=_albumPlayerView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                           //@synthesize tap=_tap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                                 //@synthesize percentVisible=_percentVisible - In the implementation block
-(IGAlbumPlayerView *)albumPlayerView;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tap;
-(void)albumPlayerView:(id)arg1 didChangeToPage:(int)arg2 ;
-(void)albumPlayerView:(id)arg1 didRequestVideoPlaybackWithConfig:(id)arg2 ;
-(void)albumPlayerViewDidRequestVideoStop:(id)arg1 ;
-(void)configureWithFocusCoordinator:(id)arg1 delegate:(id)arg2 playerDelegate:(id)arg3 ;
-(void)albumCellTapped;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(id)contentViewForHeartAnimation;
-(void)play;
-(id)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<IGFeedItemAlbumCellDelegate>)delegate;
-(void)stop;
-(void)prepareForReuse;
-(char)isSponsored;
@end

