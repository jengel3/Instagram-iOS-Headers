

@class IGQuadtree, NSMutableArray, IGQuadtreeRegion;

@interface IGQuadtreeClusterQuery : NSObject {

	IGQuadtree* _quadtree;
	NSMutableArray* _clusters;
	IGQuadtreeRegion* _region;

}

@property (nonatomic,readonly) NSMutableArray * clusters;              //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,readonly) IGQuadtreeRegion * region;              //@synthesize region=_region - In the implementation block
-(id)initWithQuadtree:(id)arg1 ;
-(id)getClustersForRegion:(id)arg1 maxDistance:(float)arg2 mapView:(id)arg3 existingClusters:(id)arg4 ;
-(id)getNamedClusters;
-(id)initWithQuadtreePoints:(id)arg1 ;
-(IGQuadtreeRegion *)region;
-(NSMutableArray *)clusters;
@end

