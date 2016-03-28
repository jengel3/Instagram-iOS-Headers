
#import <Instagram/IGFeedNetworkSource.h>

@class NSArray;

@interface IGMainFeedNetworkSource : IGFeedNetworkSource {

	NSArray* _followAccountList;

}

@property (nonatomic,readonly) NSArray * followAccountList;              //@synthesize followAccountList=_followAccountList - In the implementation block
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)onAppNeedsStateSave;
-(void)onNewItemAvailable:(id)arg1 ;
-(void)deserializeData;
-(void)loadPromotionBannerInfoFromResponse:(id)arg1 ;
-(NSArray *)followAccountList;
-(char)fetchData;
-(void)dealloc;
-(id)init;
@end

