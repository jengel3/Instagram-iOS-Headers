
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class IGQuadtreeCluster, NSString;

@interface IGClusterAnnotation : NSObject <MKAnnotation> {

	int _cachedCounterOfRemovedMedia;
	char _hasPreviousAnnotaton;
	IGQuadtreeCluster* _cluster;
	CGPoint _centerOfPreviousAnnotation;
	CGPoint _centerOfAnnotation;
	SCD_Struct_IG34 _coordinate;
	SCD_Struct_IG34 _coordinateOfPreviousAnnotation;

}

@property (nonatomic,readonly) IGQuadtreeCluster * cluster;                               //@synthesize cluster=_cluster - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG34 coordinate;                                  //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) CGPoint centerOfPreviousAnnotation;                          //@synthesize centerOfPreviousAnnotation=_centerOfPreviousAnnotation - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG34 coordinateOfPreviousAnnotation;              //@synthesize coordinateOfPreviousAnnotation=_coordinateOfPreviousAnnotation - In the implementation block
@property (assign,nonatomic) CGPoint centerOfAnnotation;                                  //@synthesize centerOfAnnotation=_centerOfAnnotation - In the implementation block
@property (assign,nonatomic) char hasPreviousAnnotaton;                                   //@synthesize hasPreviousAnnotaton=_hasPreviousAnnotaton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(CGPoint)centerOfAnnotation;
-(void)setCenterOfAnnotation:(CGPoint)arg1 ;
-(char)hasPreviousAnnotaton;
-(SCD_Struct_IG34)coordinateOfPreviousAnnotation;
-(void)setHasPreviousAnnotaton:(char)arg1 ;
-(void)setCoordinateOfPreviousAnnotation:(SCD_Struct_IG34)arg1 ;
-(void)setCenterOfPreviousAnnotation:(CGPoint)arg1 ;
-(CGPoint)centerOfPreviousAnnotation;
-(id)init:(id)arg1 ;
-(void)setCoordinate:(SCD_Struct_IG34)arg1 ;
-(SCD_Struct_IG34)coordinate;
-(int)count;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCluster:(IGQuadtreeCluster *)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end

