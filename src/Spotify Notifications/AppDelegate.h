//
//  AppDelegate.h
//  Spotify Notifications
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSUserNotificationCenterDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong, nonatomic) NSStatusItem *statusBar;
@property (strong, nonatomic) IBOutlet NSMenu *statusMenu;

- (IBAction)showAbout:(id)sender;

@end