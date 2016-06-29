

@class IGContext;

@interface IGGLShader : NSObject {

	unsigned _shaderId;
	IGContext* _context;

}

@property (assign,nonatomic,__weak) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned shaderId;                     //@synthesize shaderId=_shaderId - In the implementation block
-(id)initVertexShaderWithSource:(id)arg1 ;
-(id)initFragmentShaderWithSource:(id)arg1 ;
-(unsigned)shaderId;
-(id)initShaderWithSource:(id)arg1 type:(int)arg2 ;
-(void)dealloc;
-(IGContext *)context;
-(void)setContext:(IGContext *)arg1 ;
@end

