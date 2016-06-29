

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG116 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG118 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG118)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG118)boundingMapRect;
-(SCD_Struct_IG116)coordinate;

@end

