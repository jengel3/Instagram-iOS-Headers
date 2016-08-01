

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG36 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG37 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG37)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG37)boundingMapRect;
-(SCD_Struct_IG36)coordinate;

@end

