

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG34 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG36 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG36)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG36)boundingMapRect;
-(SCD_Struct_IG34)coordinate;

@end

