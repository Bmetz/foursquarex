// 
// AccountPreferences.h
// FoursquareX
//
// Copyright (C) 2010 Eric Butler <eric@codebutler.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <Cocoa/Cocoa.h>
#import "NSPreferences.h"

@interface AccountPreferences : NSPreferencesModule {
	IBOutlet NSWindow *sheetWindow;
	IBOutlet NSTextField *emailField;
	IBOutlet NSTextField *passwordField;
	IBOutlet NSProgressIndicator *accountIndicator;
	IBOutlet NSButton *changeButton;
}

- (IBAction)showSheet:(id)sender;
- (IBAction)hideSheet:(id)sender;
- (IBAction)updateAccount:(id)sender;

@end