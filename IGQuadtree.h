

@class NSMutableArray, IGQuadtreeRegion;

@interface IGQuadtree : NSObject {

	IGQuadtree* _northwest;
	IGQuadtree* _northeast;
	IGQuadtree* _southwest;
	IGQuadtree* _southeast;
	NSMutableArray* _points;
	double _minLatitude;
	double _maxLatitude;
	double _minLongitude;
	double _maxLongitude;
	IGQuadtreeRegion* _region;
	NSMutableArray* _allPoints;

}

@property (nonatomic,readonly) IGQuadtreeRegion * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allPoints;              //@synthesize allPoints=_allPoints - In the implementation block
-(NSMutableArray *)allPoints;
-(id)query:(id)arg1 ;
-(id)centerGeoPoint;
-(char)hasPointsInRegion:(id)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(id)minGeoPoint;
-(id)maxGeoPoint;
-(void)subdivide;
-(id)initWithRegion:(id)arg1 ;
-(char)remove:(id)arg1 ;
-(char)add:(id)arg1 ;
-(int)count;
-(id)init;
-(char)containsPoint:(id)arg1 ;
-(IGQuadtreeRegion *)region;
@end

