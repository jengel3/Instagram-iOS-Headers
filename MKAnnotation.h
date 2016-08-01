
@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_IG35 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(SCD_Struct_IG35)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(SCD_Struct_IG35)coordinate;

@end

