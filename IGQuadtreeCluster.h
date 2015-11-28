

#import <Instagram/Instagram-Structs.h>
@class QuadtreePoint, NSMutableArray;

@interface IGQuadtreeCluster : NSObject {

	QuadtreePoint* _cachedMaxPointThatIsNotRemoved;
	double _minLatitude;
	double _maxLatitude;
	double _minLongitude;
	double _maxLongitude;
	char _isSorted;
	int _cachedNumberOfRemovedPoints;
	char _isNewCluster;
	char _isTightCluster;
	NSMutableArray* _points;
	QuadtreePoint* _maxPoint;
	id _userInfo;
	CGPoint _centerPoint;
	double _maxPointValue;
	SCD_Struct_IG25 _centerCoordinate;

}

@property (nonatomic,readonly) NSMutableArray * points;                     //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) QuadtreePoint * maxPoint;                    //@synthesize maxPoint=_maxPoint - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG25 centerCoordinate;              //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) CGPoint centerPoint;                           //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) char isNewCluster;                             //@synthesize isNewCluster=_isNewCluster - In the implementation block
@property (assign,nonatomic) char isTightCluster;                           //@synthesize isTightCluster=_isTightCluster - In the implementation block
@property (nonatomic,retain) id userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) double maxPointValue;                          //@synthesize maxPointValue=_maxPointValue - In the implementation block
-(int)numActivePoints;
-(id)maxPointThatIsNotRemoved;
-(char)isTightCluster;
-(id)emptyCopyWithSameCenterCoordinate;
-(QuadtreePoint *)maxPoint;
-(void)upadteAfterEdits:(id)arg1 ;
-(void)setIsTightCluster:(char)arg1 ;
-(void)addPoints:(id)arg1 ;
-(void)setIsNewCluster:(char)arg1 ;
-(char)isNewCluster;
-(void)setMaxPointValue:(double)arg1 ;
-(id)minGeoPoint;
-(id)maxGeoPoint;
-(double)boundingBoxWidthInPixels:(id)arg1 ;
-(double)maxPointValue;
-(int)numPoints;
-(SCD_Struct_IG27)boundingRegion;
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)reset;
-(id)userInfo;
-(void)addPoint:(id)arg1 ;
-(CGPoint)centerPoint;
-(SCD_Struct_IG25)centerCoordinate;
-(void)sort;
-(void)setCenterCoordinate:(SCD_Struct_IG25)arg1 ;
-(NSMutableArray *)points;
-(void)setCenterPoint:(CGPoint)arg1 ;
@end

