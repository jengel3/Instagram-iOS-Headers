
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, IGLocation;

@interface IGLocationAnnotation : NSObject <MKAnnotation> {

	IGLocation* _location;

}

@property (nonatomic,readonly) SCD_Struct_IG29 coordinate; 
@property (nonatomic,retain) IGLocation * location;                     //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(SCD_Struct_IG29)coordinate;
-(NSString *)title;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
@end

