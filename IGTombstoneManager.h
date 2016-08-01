

@protocol IGTombstoneManagerDelegate;
@class IGTombstoneView, IGFeedItem;

@interface IGTombstoneManager : NSObject {

	id<IGTombstoneManagerDelegate> _delegate;
	IGTombstoneView* _tombstoneView;
	IGFeedItem* _feedItem;

}

@property (nonatomic,retain) IGTombstoneView * tombstoneView;                             //@synthesize tombstoneView=_tombstoneView - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                       //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGTombstoneManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IGFeedItem *)feedItem;
-(IGTombstoneView *)tombstoneView;
-(void)setTombstoneView:(IGTombstoneView *)arg1 ;
-(id)createTombstoneViewForReportType:(int)arg1 ;
-(void)feedItemTombstoneDidTapShowButton;
-(char)shouldDisplayTombstoneForFeedItem:(id)arg1 ;
-(id)fullScreenTombstoneForFeedItem:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setDelegate:(id<IGTombstoneManagerDelegate>)arg1 ;
-(id<IGTombstoneManagerDelegate>)delegate;
@end

