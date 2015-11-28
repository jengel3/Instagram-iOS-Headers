
@class IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo;


@protocol IGAnalyticsRaindropProtocol <NSObject>
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo; 
@required
-(IGAnalyticsMetadata *)analyticsMetadata;
-(char)enableNavState;
-(IGMutableRaindropRankInfo *)surfaceRankInfo;
-(IGRaindropNavEvent *)currentNavEvent;
-(int)viewType;

@end

