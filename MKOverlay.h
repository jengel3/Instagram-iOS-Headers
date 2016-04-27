

@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_IG82 coordinate; 
@property (nonatomic,readonly) SCD_Struct_IG84 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_IG84)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_IG84)boundingMapRect;
-(SCD_Struct_IG82)coordinate;

@end

