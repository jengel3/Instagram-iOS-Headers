

#import <Instagram/Instagram-Structs.h>
@class QuadtreePoint;

@interface IGQuadtreeRegion : NSObject {

	QuadtreePoint* _northwest;
	QuadtreePoint* _southeast;
	QuadtreePoint* _center;
	QuadtreePoint* _halfDimension;

}

@property (nonatomic,readonly) QuadtreePoint * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) QuadtreePoint * halfDimension;              //@synthesize halfDimension=_halfDimension - In the implementation block
+(SCD_Struct_IG27)regionAroundCoordinate:(SCD_Struct_IG25)arg1 withDistanceToBoundary:(double)arg2 ;
+(id)globalRegion;
+(SCD_Struct_IG27)regionAroundPoint:(id)arg1 withDistanceToBoundary:(double)arg2 ;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG27)arg1 ;
-(SCD_Struct_IG27)toMKCoordinateRegion;
-(char)isEqualToRegion:(id)arg1 ;
-(QuadtreePoint *)halfDimension;
-(id)expandRegion:(double)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)isGlobalRegion;
-(id)initWithMKCoordinateRegion:(SCD_Struct_IG27)arg1 expansionFactor:(double)arg2 ;
-(id)init:(id)arg1 halfDimension:(id)arg2 ;
-(id)northwest;
-(id)southeast;
-(char)intersectsRegion:(id)arg1 ;
-(QuadtreePoint *)center;
-(char)containsPoint:(id)arg1 ;
@end

