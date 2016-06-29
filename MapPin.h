
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MapPin : NSObject <MKAnnotation> {

	NSString* _title;
	NSString* _subtitle;
	SCD_Struct_IG116 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_IG116 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinates:(SCD_Struct_IG116)arg1 placeName:(id)arg2 description:(id)arg3 ;
-(void)setCoordinate:(SCD_Struct_IG116)arg1 ;
-(SCD_Struct_IG116)coordinate;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

