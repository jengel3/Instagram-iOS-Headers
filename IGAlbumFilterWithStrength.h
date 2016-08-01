

@interface IGAlbumFilterWithStrength : NSObject {

	Class _filterClass;
	float _filterStrength;

}

@property (nonatomic,retain) Class filterClass;                 //@synthesize filterClass=_filterClass - In the implementation block
@property (assign,nonatomic) float filterStrength;              //@synthesize filterStrength=_filterStrength - In the implementation block
+(id)filterClass:(Class)arg1 withStrength:(float)arg2 ;
-(Class)filterClass;
-(void)setFilterStrength:(float)arg1 ;
-(float)filterStrength;
-(void)setFilterClass:(Class)arg1 ;
@end

