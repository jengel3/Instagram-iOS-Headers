
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGAdsManagerListDataReceiving;
@class NSMutableDictionary, NSString;

@interface IGAdsManagerDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	char _isFetching;
	id<IGAdsManagerListDataReceiving> _dataReceiver;
	NSMutableDictionary* _successHandlerForMediaIdFetch;
	NSMutableDictionary* _errorHandlerForMediaIdFetch;
	NSMutableDictionary* _viewModelForMediaIdFetch;

}

@property (assign,nonatomic,__weak) id<IGAdsManagerListDataReceiving> dataReceiver;              //@synthesize dataReceiver=_dataReceiver - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * successHandlerForMediaIdFetch;              //@synthesize successHandlerForMediaIdFetch=_successHandlerForMediaIdFetch - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * errorHandlerForMediaIdFetch;                //@synthesize errorHandlerForMediaIdFetch=_errorHandlerForMediaIdFetch - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * viewModelForMediaIdFetch;                   //@synthesize viewModelForMediaIdFetch=_viewModelForMediaIdFetch - In the implementation block
@property (assign,nonatomic) char isFetching;                                                    //@synthesize isFetching=_isFetching - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id<IGAdsManagerListDataReceiving>)dataReceiver;
-(NSMutableDictionary *)successHandlerForMediaIdFetch;
-(NSMutableDictionary *)errorHandlerForMediaIdFetch;
-(NSMutableDictionary *)viewModelForMediaIdFetch;
-(id)fakeAdFeedItemFromFeedItem:(id)arg1 adViewModel:(id)arg2 ;
-(void)adViewModelWithFeedItem:(id)arg1 successHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)fakeAdfeedItemFromAdViewModel:(id)arg1 successHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setDataReceiver:(id<IGAdsManagerListDataReceiving>)arg1 ;
-(void)startFetching;
-(void)stopFetching;
-(void)forceDataRefresh;
-(void)performFetch;
-(id)init;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
@end

