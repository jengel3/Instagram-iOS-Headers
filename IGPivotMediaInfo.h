

@class NSArray, NSString, IGFeedItemPivotGridCellDataSource;

@interface IGPivotMediaInfo : NSObject {

	NSArray* _creators;
	NSArray* _pivots;
	NSString* _pivotMediaId;
	NSString* _rankToken;
	IGFeedItemPivotGridCellDataSource* _gridCellDataSource;

}

@property (nonatomic,readonly) NSArray * creators;                                                  //@synthesize creators=_creators - In the implementation block
@property (nonatomic,readonly) NSArray * pivots;                                                    //@synthesize pivots=_pivots - In the implementation block
@property (nonatomic,copy) NSString * pivotMediaId;                                                 //@synthesize pivotMediaId=_pivotMediaId - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                                                    //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,readonly) IGFeedItemPivotGridCellDataSource * gridCellDataSource;              //@synthesize gridCellDataSource=_gridCellDataSource - In the implementation block
+(void)logPivotEvent:(id)arg1 media:(id)arg2 module:(id)arg3 originalMedia:(id)arg4 extraParams:(id)arg5 ;
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(NSArray *)creators;
-(NSString *)pivotMediaId;
-(NSArray *)pivots;
-(void)setupGridCellDataSourceWithImageWidth:(float)arg1 shouldExpand:(char)arg2 shouldAddPaddingBottom:(char)arg3 ;
-(IGFeedItemPivotGridCellDataSource *)gridCellDataSource;
-(void)setPivotMediaId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

