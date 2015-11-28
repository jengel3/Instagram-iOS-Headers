
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface IGSpline : NSObject <NSCoding> {

	GLKVector2* _knots;
	unsigned _knotCount;

}
+(CVBufferRef)createPixelBufferFromCatromSplines:(id)arg1 ;
-(id)initWithKnotCount:(unsigned)arg1 ;
-(id)tesselateCatmullRomToLinear:(unsigned)arg1 ;
-(void)createMapFromLinearTesselation:(char*)arg1 mapLen:(unsigned)arg2 ;
-(id)initWithKnots:(GLKVector2*)arg1 count:(unsigned)arg2 ;
-(unsigned)knotCount;
-(GLKVector2)knotAtIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

