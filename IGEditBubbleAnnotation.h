
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface IGEditBubbleAnnotation : NSObject <MKAnnotation> {

	char _isBeingRemoved;
	SCD_Struct_IG26 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_IG26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char isBeingRemoved;                     //@synthesize isBeingRemoved=_isBeingRemoved - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(void)setIsBeingRemoved:(char)arg1 ;
-(void)setCoordinate:(SCD_Struct_IG26)arg1 ;
-(SCD_Struct_IG26)coordinate;
-(id)initWithCoordinate:(SCD_Struct_IG26)arg1 ;
-(char)isBeingRemoved;
@end

