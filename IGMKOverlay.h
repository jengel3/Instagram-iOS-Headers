
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface IGMKOverlay : NSObject <MKOverlay>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_IG116 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_IG118 boundingMapRect; 
-(SCD_Struct_IG118)boundingMapRect;
-(SCD_Struct_IG116)coordinate;
@end

