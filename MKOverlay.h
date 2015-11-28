

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG25 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG27 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG27)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG27)boundingMapRect;
-(SCD_Struct_IG25)coordinate;

@end

