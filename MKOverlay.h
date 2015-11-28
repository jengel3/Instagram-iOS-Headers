

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG30 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG32 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG32)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG32)boundingMapRect;
-(SCD_Struct_IG30)coordinate;

@end

