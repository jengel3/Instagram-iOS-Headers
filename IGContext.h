

#import <Instagram/Instagram-Structs.h>
@class NSMutableArray, NSMutableSet, EAGLContext;

@interface IGContext : NSObject {

	CVOpenGLESTextureCacheRef _textureCache;
	unsigned _squareVertexBuffer;
	NSMutableArray* _resources;
	NSMutableSet* _surfacesToFlush;
	NSMutableSet* _cachedSurfaces;
	EAGLContext* _openglContext;
	CGSize _maxTextureSize;

}

@property (nonatomic,retain) EAGLContext * openglContext;                           //@synthesize openglContext=_openglContext - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef textureCache; 
@property (nonatomic,readonly) unsigned squareVertexBuffer; 
@property (nonatomic,readonly) CGSize maxTextureSize;                               //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
+(id)currentContext;
-(CGSize)maxTextureSize;
-(void)makeCurrent;
-(void)removeAllReusableSurfaces;
-(CVOpenGLESTextureCacheRef)textureCache;
-(void)setResource:(id)arg1 forFilter:(id)arg2 ;
-(id)resourceForFilter:(id)arg1 ;
-(void)addSurfaceToFlush:(id)arg1 ;
-(unsigned)squareVertexBuffer;
-(void)pushReusableSurface:(id)arg1 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(EAGLContext *)openglContext;
-(void)setOpenglContext:(EAGLContext *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

