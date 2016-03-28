
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGAlbumSubscriptionTrayNetworkSourceDelegate;
@class IGFeedNetworkSource, NSString;

@interface IGAlbumSubscriptionTrayNetworkSource : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGAlbumSubscriptionTrayNetworkSourceDelegate> _delegate;
	IGFeedNetworkSource* _feedNetworkSource;

}

@property (assign,nonatomic,__weak) id<IGAlbumSubscriptionTrayNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                     //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareFeedNetworkSourceForPreloading;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)fetchData;
-(void)setDelegate:(id<IGAlbumSubscriptionTrayNetworkSourceDelegate>)arg1 ;
-(id)init;
-(id<IGAlbumSubscriptionTrayNetworkSourceDelegate>)delegate;
@end

