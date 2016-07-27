
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class CLLocation, NSString;

@interface IGCoordinateAnnotation : NSObject <MKAnnotation> {

	CLLocation* _clLocation;

}

@property (nonatomic,retain) CLLocation * clLocation;                   //@synthesize clLocation=_clLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_IG34 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)annotationWithCLLocation:(id)arg1 ;
-(void)setClLocation:(CLLocation *)arg1 ;
-(CLLocation *)clLocation;
-(SCD_Struct_IG34)coordinate;
@end

