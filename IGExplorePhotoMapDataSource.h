

@protocol IGExplorePhotoMapDataSourceDelegate;
#import <Instagram/Instagram-Structs.h>
@interface IGExplorePhotoMapDataSource : NSObject {

	id<IGExplorePhotoMapDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGExplorePhotoMapDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startNearbyLocationRequestWithRegion:(SCD_Struct_IG84)arg1 ;
-(void)startRequestWithRegion:(SCD_Struct_IG84)arg1 isRefresh:(char)arg2 ;
-(void)setDelegate:(id<IGExplorePhotoMapDataSourceDelegate>)arg1 ;
-(id<IGExplorePhotoMapDataSourceDelegate>)delegate;
@end

