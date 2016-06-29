

@protocol IGDrawPlainStyleUndoManagerDelegate;
@class NSUndoManager;

@interface IGDrawPlainStyleUndoManager : NSObject {

	NSUndoManager* _undoManager;
	id<IGDrawPlainStyleUndoManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDrawPlainStyleUndoManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char canUndo; 
-(void)_undoStroke:(id)arg1 ;
-(void)undoLastStroke;
-(void)setDelegate:(id<IGDrawPlainStyleUndoManagerDelegate>)arg1 ;
-(id<IGDrawPlainStyleUndoManagerDelegate>)delegate;
-(char)canUndo;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)addStroke:(id)arg1 ;
@end

