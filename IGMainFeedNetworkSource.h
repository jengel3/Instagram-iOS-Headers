
#import <Instagram/IGFeedNetworkSource.h>

@class NSArray, IGPostItem;

@interface IGMainFeedNetworkSource : IGFeedNetworkSource {

	NSArray* _followAccountList;
	IGPostItem* _firstPostBeforeFeedReload;

}

@property (nonatomic,readonly) NSArray * followAccountList;                       //@synthesize followAccountList=_followAccountList - In the implementation block
@property (nonatomic,retain) IGPostItem * firstPostBeforeFeedReload;              //@synthesize firstPostBeforeFeedReload=_firstPostBeforeFeedReload - In the implementation block
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)onAppNeedsStateSave;
-(void)onNewItemAvailable:(id)arg1 ;
-(void)deserializeData;
-(void)setFirstPostBeforeFeedReload:(IGPostItem *)arg1 ;
-(void)loadPromotionBannerInfoFromResponse:(id)arg1 ;
-(void)deserializeEntriesAtPath:(id)arg1 ;
-(NSArray *)followAccountList;
-(IGPostItem *)firstPostBeforeFeedReload;
-(char)fetchData;
-(void)archiveToFile:(id)arg1 ;
-(void)dealloc;
@end

