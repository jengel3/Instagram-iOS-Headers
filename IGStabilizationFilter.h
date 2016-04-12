
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGLFilter.h>

@class NSData;

@interface IGStabilizationFilter : IGGLFilter {

	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	unsigned long _stripSize;
	GLKMatrix4 _projection;
	char _needsRefresh;
	char _needsMeshUpdate;
	int _mode;
	float _zoom;
	NSData* _frameWarp;
	SCD_Struct_IG84 _cameraParameters;

}

@property (assign,nonatomic) SCD_Struct_IG84 cameraParameters;              //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (assign,nonatomic) int mode;                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float zoom;                                    //@synthesize zoom=_zoom - In the implementation block
@property (nonatomic,retain) NSData * frameWarp;                            //@synthesize frameWarp=_frameWarp - In the implementation block
-(void)setCameraParameters:(SCD_Struct_IG84)arg1 ;
-(void)setFrameWarp:(NSData *)arg1 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)bindVertexBufferWithProgram:(id)arg1 ;
-(void)bindIndexBufferWithProgram:(id)arg1 ;
-(void)bindAttributeArrays:(id)arg1 ;
-(SCD_Struct_IG84)cameraParameters;
-(NSData *)frameWarp;
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)zoom;
-(void)setZoom:(float)arg1 ;
@end

