
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGAlbumSubscriptionTrayNetworkSourceDelegate;
@class IGFeedNetworkSource, IGFeedItem, NSString;

@interface IGAlbumSubscriptionTrayNetworkSource : NSObject <IGFeedNetworkSourceDelegate> {

	int _feedFetchState;
	IGFeedNetworkSource* _feedNetworkSource;
	id<IGAlbumSubscriptionTrayNetworkSourceDelegate> _delegate;
	IGFeedItem* _currentAlbum;

}

@property (assign,nonatomic) int feedFetchState;                                                            //@synthesize feedFetchState=_feedFetchState - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                     //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumSubscriptionTrayNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * currentAlbum;                                                     //@synthesize currentAlbum=_currentAlbum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)currentAlbum;
-(void)prepareFeedNetworkSourceForPreloading;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)setFeedFetchState:(int)arg1 ;
-(void)setCurrentAlbum:(IGFeedItem *)arg1 ;
-(void)resetAndFetchAgainIfNeeded;
-(int)feedFetchState;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(void)fetchDataIfNotFullyLoaded;
-(void)fetchData;
-(void)setDelegate:(id<IGAlbumSubscriptionTrayNetworkSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumSubscriptionTrayNetworkSourceDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

