

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG26 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG28 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG28)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG28)boundingMapRect;
-(SCD_Struct_IG26)coordinate;

@end

