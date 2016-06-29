
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedItemAlbumCellDelegate, IGFeedVideoCellPlayerDelegate;
@class IGAlbumPlayerView, UITapGestureRecognizer, NSString;

@interface IGFeedItemAlbumCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

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
-(IGAlbumPlayerView *)albumPlayerView;
-(UITapGestureRecognizer *)tap;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(void)configureWithFocusCoordinator:(id)arg1 delegate:(id)arg2 playerDelegate:(id)arg3 ;
-(void)albumCellTapped;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(id)contentViewForHeartAnimation;
-(void)play;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<IGFeedItemAlbumCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)pause;
@end

