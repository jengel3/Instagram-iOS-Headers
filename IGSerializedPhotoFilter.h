
#import <Instagram/IGPhotoFilter.h>

@class NSString, NSDictionary, NSData;

@interface IGSerializedPhotoFilter : IGPhotoFilter {

	int _filterType;
	NSString* _filterName;
	NSDictionary* _samplers;
	NSData* _borderImageData;
	NSString* _fragmentFunctions;
	NSString* _fragmentShader;

}

@property (assign,nonatomic) int filterType;                            //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) NSString * filterName;                     //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,retain) NSDictionary * samplers;                   //@synthesize samplers=_samplers - In the implementation block
@property (nonatomic,retain) NSData * borderImageData;                  //@synthesize borderImageData=_borderImageData - In the implementation block
@property (nonatomic,retain) NSString * fragmentFunctions;              //@synthesize fragmentFunctions=_fragmentFunctions - In the implementation block
@property (nonatomic,retain) NSString * fragmentShader;                 //@synthesize fragmentShader=_fragmentShader - In the implementation block
+(id)photoFilterWithDictionary:(id)arg1 ;
+(id)photoFilterFromFile:(id)arg1 ;
-(NSString *)filterName;
-(NSString *)fragmentFunctions;
-(void)setSamplers:(NSDictionary *)arg1 ;
-(void)setFragmentFunctions:(NSString *)arg1 ;
-(void)setBorderImageData:(NSData *)arg1 ;
-(NSData *)borderImageData;
-(void)setFragmentShader:(NSString *)arg1 ;
-(NSString *)fragmentShader;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(int)filterType;
-(void)setFilterType:(int)arg1 ;
-(id)borderImage;
-(NSDictionary *)samplers;
-(void)setFilterName:(NSString *)arg1 ;
@end

